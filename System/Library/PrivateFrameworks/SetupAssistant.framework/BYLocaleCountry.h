/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BYLocaleCountry : NSObject {

	NSString* _name;
	NSString* _code;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * code;              //@synthesize code=_code - In the implementation block
+(/*^block*/id)comparatorForLocale:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)code;
-(void)setName:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
@end

