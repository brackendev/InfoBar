//
//  InfoBarAppDelegate.h
//  InfoBar
//
//  Created by Junior B. on 20.02.11.
//  Copyright 2011 ThinkDiff.ch. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JBInfoBar.h"

@interface InfoBarAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    JBInfoBar *infoBar;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@property (nonatomic, retain) JBInfoBar *infoBar;

@end
