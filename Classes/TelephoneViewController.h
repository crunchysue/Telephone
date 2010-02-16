//
//  TelephoneViewController.h
//  Telephone
//
//  Created by Sue Brown on 2/15/10.
//  Copyright House of Crunchy 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TelephoneViewController : UIViewController {
	IBOutlet UILabel *sentenceLabel;
	IBOutlet UITextView *sentenceText;
}

@property (nonatomic, retain) UILabel * sentenceLabel;
@property (nonatomic, retain) UITextView * sentenceText;

- (IBAction) sendSentence;
- (void) showSentence:(NSString *)theSentence;
- (void) hideSentence;

@end

