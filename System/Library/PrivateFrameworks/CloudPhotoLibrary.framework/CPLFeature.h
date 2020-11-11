/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CPLFeature : NSObject
+(id)featureWithName:(id)arg1 ;
-(BOOL)disableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)enableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1 ;
@end
