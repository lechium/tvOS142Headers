/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MTLPostVertexDumpOutput : NSObject {

	NSString* _airMDType;
	unsigned long long _dataType;
	NSString* _name;
	unsigned long long _offset;

}

@property (readonly) NSString * airMDType;                     //@synthesize airMDType=_airMDType - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long offset;                //@synthesize offset=_offset - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(unsigned long long)offset;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 name:(id)arg3 offset:(unsigned long long)arg4 ;
-(NSString *)airMDType;
@end

