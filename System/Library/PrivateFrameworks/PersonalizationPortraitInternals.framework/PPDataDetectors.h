/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPDataDetectors : NSObject
+(void)scanString:(id)arg1 inRange:(SCD_Struct_PP18)arg2 withScanner:(DDScannerRef)arg3 options:(long long)arg4 block:(/*^block*/id)arg5 ;
+(void)addAddressComponentsInResult:(_DDResult*)arg1 toDictionary:(id)arg2 ;
+(id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 ;
+(id)addressComponentsFromString:(id)arg1 extractedAddress:(id*)arg2 locale:(id)arg3 ;
+(BOOL)isValidDataDetectorsMatch:(_DDResult*)arg1 addressComponents:(id*)arg2 ;
+(BOOL)_components:(id)arg1 haveHongKongAtKey:(id)arg2 ;
+(BOOL)_componentsHaveStreetAndCityOrZip:(id)arg1 ;
@end

