/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(id)_additionalQueryItems;
-(id)urlWithServiceType:(id)arg1 placement:(id)arg2 bag:(id)arg3 hydrateRelatedContents:(BOOL)arg4 additionalParameters:(id)arg5 ;
-(id)_realmOverridesFromBag:(id)arg1 ;
-(id)_realmFromBag:(id)arg1 ;
-(id)_formattedURLPathWithBag:(id)arg1 ;
-(id)_languageTagFromBag:(id)arg1 fallback:(id)arg2 ;
-(id)_stringForKey:(id)arg1 fromBag:(id)arg2 ;
-(id)_urlPathFromBag:(id)arg1 ;
-(id)_countryCodeFromBag:(id)arg1 ;
@end
