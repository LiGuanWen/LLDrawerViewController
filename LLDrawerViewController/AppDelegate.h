//
//  AppDelegate.h
//  LLDrawerViewController
//
//  Created by Lilong on 2018/7/17.
//  Copyright © 2018年 diqidaimu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "LLDrawerViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;
@property (strong, nonatomic) LLDrawerViewController *LeftSlideVC;
@property (strong, nonatomic) UINavigationController *mainNavigationController;
- (void)saveContext;


@end

