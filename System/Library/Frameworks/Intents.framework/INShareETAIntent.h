/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INShareETAIntentExport.h>

@class NSArray, NSString;

@interface INShareETAIntent : INIntent <INShareETAIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 ;
@end

