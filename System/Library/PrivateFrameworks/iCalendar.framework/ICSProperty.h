/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting> {

	NSMutableDictionary* _parameters;
	unsigned long long _type;
	id _value;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(unsigned long long)type;
-(id)value;
-(id)parameters;
-(BOOL)isMultiValued;
-(void)setParameters:(id)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)parameterValueForName:(id)arg1 ;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3 ;
-(void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2 ;
-(void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setValueAsProperty:(id)arg1 withRawValue:(const char*)arg2 options:(unsigned long long)arg3 ;
-(void)addParametersFromDictionary:(id)arg1 ;
-(id)allParameters;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
@end

