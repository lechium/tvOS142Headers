/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>
@required
-(void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(BOOL)arg3 query:(id)arg4;
-(void)client_deliverEnumerationResults:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3;

@end

