/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TVSInternationalization : NSObject
+(id)region;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)arg1 forPreferredLanguages:(id)arg2 ;
+(id)preferredLanguagesForRegion:(id)arg1 ;
+(id)regionalVariantLanguagesForBaseLanguage:(id)arg1 ;
+(id)deviceLanguageIdentifier;
+(void)setRegion:(id)arg1 ;
+(id)availableRegions;
+(id)displayNameForLanguage:(id)arg1 ;
+(id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 ;
+(id)availableSystemLanguages;
+(id)systemLanguage;
+(void)postNotificationForLocaleChange;
+(void)postNotificationForLanguageChange;
+(void)setRegion:(id)arg1 ignoringExistingLocale:(BOOL)arg2 ;
+(void)setSystemLanguage:(id)arg1 ;
+(id)availableBaseSystemLanguages;
+(id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 ;
@end

