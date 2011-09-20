//
//  SocketTestDemoAppDelegate.h
//  SocketTestDemo
//
//  Created by apple on 11-9-20.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SocketTestDemoViewController;

@interface SocketTestDemoAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet SocketTestDemoViewController *viewController;

@end
