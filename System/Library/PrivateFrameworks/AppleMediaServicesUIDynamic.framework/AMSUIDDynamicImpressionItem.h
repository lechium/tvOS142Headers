/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServicesUIDynamic/AppleMediaServicesUIDynamic-Structs.h>
@class AMSUIDDynamicImpressionMetrics;

@interface AMSUIDDynamicImpressionItem : NSObject {

	 frame;
	 impressionMetrics;

}

@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) AMSUIDDynamicImpressionMetrics * impressionMetrics; 
-(id)init;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 impressionMetrics:(id)arg2 ;
-(AMSUIDDynamicImpressionMetrics *)impressionMetrics;
-(void)setImpressionMetrics:(AMSUIDDynamicImpressionMetrics *)arg1 ;
@end
