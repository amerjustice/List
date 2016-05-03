//
//  AddItemViewController.h
//  List
//
//  Created by Susan Justice on 2016-04-21.
//  Copyright © 2016 Amer Justice. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

- (void)didSaveNewTodo:(NSString *)todoText;

@end


@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)Save:(id)sender;
- (IBAction)Cancel:(id)sender;
@end
