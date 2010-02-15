//
//  Bump.h
//  Bump API
//
//  Copyrights / Disclaimer
//  Copyright 2009, Bump Technologies, Inc. All rights reserved.
//  Use of the software programs described herein is subject to applicable
//  license agreements and nondisclosure agreements. Unless specifically
//  otherwise agreed in writing, all rights, title, and interest to this
//  software and documentation remain with Bump Technologies, Inc. Unless
//  expressly agreed in a signed license agreement, Bump Technologies makes
//  no representations about the suitability of this software for any purpose
//  and it is provided "as is" without express or implied warranty.
//
//  Created by wmui on 11/5/09.
//

typedef enum BumpDisconnectReason {
	END_USER_QUIT, //The local user quit cleanly
	END_LOST_NET,  //The connection to the server was lost
	END_OTHER_USER_QUIT, //the remote user quit cleanly
	END_OTHER_USER_LOST  //the connection to the remote user was lost
} BumpDisconnectReason;

typedef enum BumpConnectFailedReason {
	FAIL_NONE,
	FAIL_USER_CANCELED, //The local user canceled before connecting
	FAIL_NETWORK_UNAVAILABLE, //The network was unavailable, and the local user canceled.
	FAIL_INVALID_AUTHORIZATION, //The APIKey was invalid
	FAIL_EXCEEDED_RATE_LIMIT,
	FAIL_EXPIRED_KEY
} BumpConnectFailedReason;

@protocol BumpDelegate <NSObject>
- (void) bumpDidConnect;
- (void) bumpDidDisconnect:(BumpDisconnectReason)reason;
- (void) bumpConnectFailed:(BumpConnectFailedReason)reason;
- (void) bumpDataReceived:(NSData *)chunk;
@optional
- (void) bumpShareAppLinkSent;
@end

@class BumpHandsView;
@class BumpRoundedRectView;
@interface Bump : NSObject {
	id<BumpDelegate> delegate;
}

@property (nonatomic, assign) id<BumpDelegate> delegate;

-(void) connect;
-(void) connectToShareThisApp;
-(void) disconnect;

-(void) send:(NSData *)chunk;
-(void) configAPIKey:(NSString *)apiKey;
-(void) configActionMessage:(NSString *)actionMessage;
-(void) configHistoryMessage:(NSString *)feed;
-(void) configUserName:(NSString *)name;
-(NSString *) userName;
-(NSString *) otherUserName;

// End public interface for Bump API
//------------------------------------------------------------------------------------------------


/*
 *	Bump Api Private Actions and Outlets. These Are not meant to be touched by bump Api customers.
 *	These actions and outlets simply provide support for the BumpAPI UI's .nib files.
 *	Please ignore below.
 */
- (IBAction) bumpPrivateAction01;
- (IBAction) bumpPrivateAction02;
- (IBAction) bumpPrivateAction03;
- (IBAction) bumpPrivateAction04;
- (IBAction) bumpPrivateAction05;
- (IBAction) bumpPrivateAction06;
@property (nonatomic, assign) IBOutlet UIView *bumpPrivateOutlet01;
@property (nonatomic, assign) IBOutlet UIView *bumpPrivateOutlet02;
@property (nonatomic, assign) IBOutlet UIView *bumpPrivateOutlet03;
@property (nonatomic, assign) IBOutlet UIButton *bumpPrivateOutlet04;
@property (nonatomic, assign) IBOutlet UITextField *bumpPrivateOutlet05;
@property (nonatomic, assign) IBOutlet UILabel *bumpPrivateOutlet06;
@property (nonatomic, assign) IBOutlet UILabel *bumpPrivateOutlet07;
@property (nonatomic, assign) IBOutlet UILabel *bumpPrivateOutlet08;
@property (nonatomic, assign) IBOutlet UILabel *bumpPrivateOutlet09;
@property (nonatomic, assign) IBOutlet UIImageView *bumpPrivateOutlet10;
@property (nonatomic, assign) IBOutlet UIImageView *bumpPrivateOutlet11;
@property (nonatomic, assign) IBOutlet UIActivityIndicatorView *bumpPrivateOutlet12;
@property (nonatomic, assign) IBOutlet UIActivityIndicatorView *bumpPrivateOutlet13;
@property (nonatomic, assign) IBOutlet BumpHandsView *bumpPrivateOutlet14;
@property (nonatomic, assign) IBOutlet BumpRoundedRectView *bumpPrivateOutlet15;
@end
