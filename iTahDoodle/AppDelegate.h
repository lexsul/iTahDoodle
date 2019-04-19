//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by Сулейманов Алексей on 19/04/2019.
//  Copyright © 2019 alex. All rights reserved.
//

#import <UIKit/UIKit.h>
NSString *docPath(void);
@interface AppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>
{
  UIViewController *initalViewController;
  UITableView *taskTable;
  UITextField *taskField;
  UIButton *insertButton;
  NSMutableArray *tasks;
}
- (void)addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;


@end

