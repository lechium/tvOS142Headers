/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@protocol MTEnvironmentDelegate;
@interface MTEnvironment : MTObject {

	id<MTEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTEnvironmentDelegate>)delegate;
-(void)setDelegate:(id<MTEnvironmentDelegate>)arg1 ;
-(id)cookies;
-(id)userAgent;
-(id)connectionType;
-(id)os;
-(id)osVersion;
-(id)hardwareModel;
-(id)userType;
-(id)appVersion;
-(id)pixelRatio;
-(id)screenHeight;
-(id)screenWidth;
-(id)environmentDataCenter;
-(id)pageUrl;
-(id)app;
-(id)osBuildNumber;
-(BOOL)isAnonymous;
-(id)hostAppVersion;
-(id)capacityData;
-(id)capacityDataAvailable;
-(id)capacityDisk;
-(id)capacitySystem;
-(id)capacitySystemAvailable;
-(id)dsId;
-(id)hardwareFamily;
-(id)hostApp;
-(id)osLanguages;
-(id)resourceRevNum;
-(id)storeFrontHeader;
-(id)windowInnerHeight;
-(id)windowInnerWidth;
-(id)windowOuterHeight;
-(id)windowOuterWidth;
-(id)environmentBuild;
-(id)environmentInstance;
-(id)parentPageUrl;
@end
