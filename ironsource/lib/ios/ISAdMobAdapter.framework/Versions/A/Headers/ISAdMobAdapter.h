//
//  ISAdMobAdapter.h
//  ISAdMobAdapter
//
//  Created by Daniil Bystrov on 4/11/16.
//  Copyright © 2016 IronSource. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IronSource/ISBaseAdapter+Internal.h"

static NSString * const AdMobAdapterVersion = @"4.3.10";
static NSString * GitHash = @"76caadf22";

//System Frameworks For AdMob Adapter

@import AdSupport;
@import AudioToolbox;
@import AVFoundation;
@import CFNetwork;
@import CoreData;
@import CoreGraphics;
@import CoreMedia;
@import CoreTelephony;
@import CoreVideo;
@import JavaScriptCore;
@import MediaPlayer;
@import MessageUI;
@import MobileCoreServices;
@import QuartzCore;
@import SafariServices;
@import Security;
@import StoreKit;
@import SystemConfiguration;
@import UIKit;
@import WebKit;

@interface ISAdMobAdapter : ISBaseAdapter

@end
