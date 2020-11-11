/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INTermsAndConditionsExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSSecureCoding, NSCopying> {

	NSString* _localizedTermsAndConditionsText;
	NSURL* _privacyPolicyURL;
	NSURL* _termsAndConditionsURL;

}

@property (nonatomic,readonly) NSString * localizedTermsAndConditionsText;              //@synthesize localizedTermsAndConditionsText=_localizedTermsAndConditionsText - In the implementation block
@property (nonatomic,readonly) NSURL * privacyPolicyURL;                                //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (nonatomic,readonly) NSURL * termsAndConditionsURL;                           //@synthesize termsAndConditionsURL=_termsAndConditionsURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)localizedTermsAndConditionsText;
-(NSURL *)privacyPolicyURL;
-(NSURL *)termsAndConditionsURL;
-(id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3 ;
@end

