/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionOutput : _UKNOWN_SUPERCLASS_ <MLFeatureProvider> {

	 provider;
	 $__lazy_storage_$_result_isRequestedApp;
	 $__lazy_storage_$_result_isRequestedAppProbability;

}

@property (readonly,nonatomic) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

