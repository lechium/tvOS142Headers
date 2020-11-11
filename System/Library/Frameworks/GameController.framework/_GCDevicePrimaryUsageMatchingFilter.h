/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCDeviceMatchingFilter.h>

@class NSNumber, NSString;

@interface _GCDevicePrimaryUsageMatchingFilter : NSObject <_GCDeviceMatchingFilter> {

	NSNumber* _primaryUsagePage;
	NSNumber* _primaryUsage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)identifier;
-(BOOL)match:(id)arg1 ;
-(id)initWithPrimaryUsagePage:(id)arg1 PrimaryUsage:(id)arg2 ;
@end
