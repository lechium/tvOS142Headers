/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DDSAssetObserving <NSObject>
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(void)observeAssetTypes:(id)arg1;
-(void)notifyObserversAssetsUpdatedForType:(id)arg1;

@end

