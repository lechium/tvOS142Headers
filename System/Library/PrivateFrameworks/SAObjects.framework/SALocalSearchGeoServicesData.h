/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject

@property (nonatomic,copy) NSArray * additionalEnabledTransitMarkets; 
@property (nonatomic,copy) NSData * clientMetadata; 
@property (nonatomic,copy) NSString * environment; 
+(id)geoServicesData;
+(id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSData *)clientMetadata;
-(void)setClientMetadata:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSArray *)additionalEnabledTransitMarkets;
-(void)setAdditionalEnabledTransitMarkets:(NSArray *)arg1 ;
@end

