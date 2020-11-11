/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {

	void* _formatter;

}

@property (assign) unsigned long long unitOptions; 
@property (assign) long long unitStyle; 
@property (copy) NSLocale * locale; 
@property (copy) NSNumberFormatter * numberFormatter; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setUnitOptions:(unsigned long long)arg1 ;
-(void)setUnitStyle:(long long)arg1 ;
-(unsigned long long)unitOptions;
-(long long)unitStyle;
-(NSNumberFormatter *)numberFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(id)stringFromUnit:(id)arg1 ;
-(id)stringFromMeasurement:(id)arg1 ;
-(id)measurementFromString:(id)arg1 ;
@end

