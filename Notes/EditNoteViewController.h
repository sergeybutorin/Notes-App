//
//  EditNoteViewController.h
//  Notes
//
//  Created by Сергей Буторин on 11/09/2017.
//  Copyright © 2017 Sergey Butorin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditNoteViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end
