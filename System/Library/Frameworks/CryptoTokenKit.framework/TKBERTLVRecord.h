/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CryptoTokenKit/TKTLVRecord.h>

@interface TKBERTLVRecord : TKTLVRecord
+(id)parseFromDataSource:(id)arg1 ;
+(unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char*)arg2 ;
+(id)dataForTag:(unsigned long long)arg1 ;
+(id)zuluDateFormatter;
-(id)initWithPropertyList:(id)arg1 ;
-(id)propertyList;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 ;
-(id)initWithTag:(unsigned long long)arg1 records:(id)arg2 ;
@end
