/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSString * languageIdentifier; 
@property (copy,readonly) NSString * numberingSystem; 
@property (copy,readonly) NSArray * availableNumberingSystems; 
@property (readonly) long long _calendarDirection; 
+(unsigned long long)_IS_currentLanguageDirection;
+(id)localeForBundleLanguage:(id)arg1 ;
+(id)baseLanguageFromLanguage:(id)arg1 ;
+(id)baseSystemLanguages;
+(id)languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 filter:(long long)arg4 ;
+(id)_globalPreferredLanguages;
+(id)supportedLanguages;
+(id)exemplarForLanguage:(id)arg1 ;
+(id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4 ;
+(id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2 ;
+(id)deviceLanguage;
+(id)minimizedLanguagesFromLanguages:(id)arg1 ;
+(id)languagesByAddingRelatedLanguagesToLanguages:(id)arg1 ;
+(id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 ;
+(id)deviceLanguages;
+(id)supportedRegions;
+(id)exemplarRegionForLanguage:(id)arg1 ;
+(id)_languagesToExemplarStrings;
+(id)_addLikelySubtagsForLocaleIdentifier:(id)arg1 ;
+(id)_supportedKeyboardLanguages;
+(id)_languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 ;
+(id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2 ;
+(id)_availableRegionsOfType:(int)arg1 ;
+(id)_containingRegionOfType:(int)arg1 forRegion:(id)arg2 ;
+(id)_normalizedLanguageIdentifierFromString:(id)arg1 ;
+(id)_minimizeSubtagsForLocaleIdentifier:(id)arg1 ;
+(id)_minimizedLanguages;
+(id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 ;
+(id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3 ;
+(id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4 ;
+(id)scriptCodeFromLanguage:(id)arg1 ;
+(id)relatedLanguagesForLanguage:(id)arg1 ;
+(id)spokenLanguagesForLanguage:(id)arg1 ;
+(id)_languageNameOverrides;
+(id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(ULocaleDisplayNamesRef)arg2 ;
+(id)_regionLanguageDataForRegionCode:(id)arg1 subdivisionCode:(id)arg2 ;
+(id)availableContinents;
+(id)containingContinentOfRegion:(id)arg1 ;
+(id)containingRegionOfRegion:(id)arg1 ;
+(id)_generateMinimizedLanguages;
+(id)availableSpokenLanguages;
+(id)spokenLanguagesForLanguages:(id)arg1 includeLanguagesForRegion:(BOOL)arg2 ;
+(id)_parentLocaleIdentifierForIdentifier:(id)arg1 ;
+(id)autoupdatingCurrentLocale;
+(id)__effectiveLanguageForBundle:(id)arg1 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)_deviceLanguage;
+(id)preferredLocale;
+(id)systemLanguages;
+(void)setPreferredLanguages:(id)arg1 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(void)_setPreferredMeasurementSystem:(id)arg1 ;
+(id)_preferredMeasurementSystem;
+(void)_setPreferredTemperatureUnit:(id)arg1 ;
+(id)_preferredTemperatureUnit;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)availableLocaleIdentifiers;
+(id)ISOLanguageCodes;
+(id)ISOCountryCodes;
+(id)ISOCurrencyCodes;
+(id)commonISOCurrencyCodes;
+(id)preferredLanguages;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
-(NSString *)languageIdentifier;
-(id)localizedStringForLanguage:(id)arg1 context:(long long)arg2 ;
-(id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(BOOL)arg4 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 ;
-(NSString *)numberingSystem;
-(id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(BOOL)arg3 ;
-(NSArray *)availableNumberingSystems;
-(id)localizedStringForNumberingSystem:(id)arg1 short:(BOOL)arg2 ;
-(id)countryCodeTopLevelDomainsUsingPunycode:(BOOL)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_calendarDirection;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)_prefs;
-(id)localeIdentifier;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)calendarIdentifier;
-(id)localizedStringForLocaleIdentifier:(id)arg1 ;
-(id)languageCode;
-(id)localizedStringForLanguageCode:(id)arg1 ;
-(id)countryCode;
-(id)localizedStringForCountryCode:(id)arg1 ;
-(id)scriptCode;
-(id)localizedStringForScriptCode:(id)arg1 ;
-(id)variantCode;
-(id)localizedStringForVariantCode:(id)arg1 ;
-(id)localizedStringForCalendarIdentifier:(id)arg1 ;
-(id)collationIdentifier;
-(id)localizedStringForCollationIdentifier:(id)arg1 ;
-(id)decimalSeparator;
-(id)localizedStringForDecimalSeparator:(id)arg1 ;
-(id)groupingSeparator;
-(id)localizedStringForGroupingSeparator:(id)arg1 ;
-(id)currencySymbol;
-(id)localizedStringForCurrencySymbol:(id)arg1 ;
-(id)currencyCode;
-(id)localizedStringForCurrencyCode:(id)arg1 ;
-(id)collatorIdentifier;
-(id)localizedStringForCollatorIdentifier:(id)arg1 ;
-(id)quotationBeginDelimiter;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg1 ;
-(id)quotationEndDelimiter;
-(id)localizedStringForQuotationEndDelimiter:(id)arg1 ;
-(id)alternateQuotationBeginDelimiter;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1 ;
-(id)alternateQuotationEndDelimiter;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1 ;
-(id)exemplarCharacterSet;
-(BOOL)usesMetricSystem;
-(id)identifier;
@end
