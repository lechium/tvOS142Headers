/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKContactFieldConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPickerContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding> {

	NSArray* _pickerItems;

}

@property (nonatomic,readonly) NSArray * pickerItems;              //@synthesize pickerItems=_pickerItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)pickerItems;
@end
