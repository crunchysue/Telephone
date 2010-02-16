//
//  TelephoneViewController.m
//  Telephone
//
//  Created by Sue Brown on 2/15/10.
//  Copyright House of Crunchy 2010. All rights reserved.
//

#import "TelephoneViewController.h"

@implementation TelephoneViewController

@synthesize sentenceLabel;
@synthesize sentenceText;

- (IBAction) sendSentence {
	sentenceLabel.text = sentenceText.text;
}


- (BOOL)textFieldShouldReturn:(UITextField *)theTextField {
	// When the user presses return, take focus away from the text field so that the keyboard is dismissed.
	
	[self sendSentence];
	[sentenceText resignFirstResponder];
	
	return YES;
}

- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range 
 replacementText:(NSString *)text
{
    // Any new character added is passed in as the "text" parameter
    if ([text isEqualToString:@"\n"]) {
        // Be sure to test for equality using the "isEqualToString" message
       	[self sendSentence];
		[textView resignFirstResponder];
		
        // Return FALSE so that the final '\n' character doesn't get added
        return FALSE;
    }
    // For any other character return TRUE so that the text gets added to the view
    return TRUE;
}


#pragma mark -
#pragma mark Sentence Handling

- (void) showSentence:(NSString *)theSentence {
	sentenceLabel.text = theSentence;
}

- (void) hideSentence {
	sentenceLabel.text = nil;
}




/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        // Custom initialization
    }
    return self;
}
*/




// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
	[self showSentence:@"The quick brown fox did jump."];
	[self performSelector:@selector(hideSentence) withObject:nil afterDelay:2];
}



/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
