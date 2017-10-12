//
//  AppDelegate+FCMPlugin.h
//  TestApp
//
//  Created by felipe on 12/06/16.
//
//

#import "AppDelegate.h"
#import <UIKit/UIKit.h>
#import <Cordova/CDVViewController.h>

@interface AppDelegate (FCMPlugin)
  // APNS
  - (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

+ (NSData*)getLastPush;

@end
