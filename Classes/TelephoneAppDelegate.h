//
//  TelephoneAppDelegate.h
//  Telephone
//
//  Created by Sue Brown on 2/15/10.
//  Copyright House of Crunchy 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TelephoneViewController;

@interface TelephoneAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TelephoneViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TelephoneViewController *viewController;

@end

