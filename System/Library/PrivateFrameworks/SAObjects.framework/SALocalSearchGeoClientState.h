/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceClientState.h>

@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState

@property (nonatomic,copy) NSArray * additionalEnabledTransitMarkets; 
@property (nonatomic,copy) NSString * environment; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)geoClientState;
+(id)geoClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)additionalEnabledTransitMarkets;
-(void)setAdditionalEnabledTransitMarkets:(NSArray *)arg1 ;
@end
