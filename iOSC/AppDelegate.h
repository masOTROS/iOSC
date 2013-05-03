//
//  AppDelegate.h
//  iOSC
//
//  Created by Wanda on 03/05/13.
//  Copyright (c) 2013 +OTROS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <VVOSC/VVOSC.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    OSCManager  *manager;
    OSCOutPort  *outPort;
    OSCInPort   *inPort;
}

@property (strong, nonatomic) UIWindow *window;

@end
