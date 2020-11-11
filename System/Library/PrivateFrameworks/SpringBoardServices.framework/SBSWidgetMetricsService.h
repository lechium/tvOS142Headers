/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSWidgetMetricsProviding;
@interface SBSWidgetMetricsService : NSObject {

	id<SBSWidgetMetricsProviding> _metricsProvider;

}

@property (nonatomic,__weak,readonly) id<SBSWidgetMetricsProviding> metricsProvider;              //@synthesize metricsProvider=_metricsProvider - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithMetricsProvider:(id)arg1 ;
-(id<SBSWidgetMetricsProviding>)metricsProvider;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

