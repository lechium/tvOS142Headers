/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBPrivacyCombinedController.h>

@class NSArray;

@interface OBPrivacyCombinedController_tvOS : OBPrivacyCombinedController {

	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
-(id)initWithIdentifiers:(id)arg1 ;
-(void)viewDidLoad;
-(NSArray *)bundleIdentifiers;
-(void)_showPrivacyFlow:(id)arg1 ;
@end
