//
//  AppLovinCustomEventBanner.h
//  AppLovin AdMob Mediation
//
//  Created by David Anderson on 11/29/12.
//  Updated by Matt Szaro on 7/10/13.
//  Copyright (c) 2013 AppLovin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <GoogleMobileAds/GoogleMobileAds.h>
#import <AppLovinSDK/ALAdService.h>
#import <AppLovinSDK/ALInterstitialAd.h>

@interface AppLovinCustomEventInter : NSObject <GADCustomEventInterstitial, ALAdLoadDelegate, ALAdDisplayDelegate>
@property (strong, atomic) ALAd* appLovinAd;
@end
