/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/iCalendar-Structs.h>
#import <libobjc.A.dylib/ICSInputByteStream.h>

@class NSData, NSString;

@interface ICSCompressedInputStream : NSObject <ICSInputByteStream> {

	SCD_Struct_IC1* underStream;
	NSData* rawData;
	void* buffer;
	unsigned long long bufPos;
	unsigned long long bufLen;
	BOOL finalBlock;
	BOOL didFinalize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(char)read;
-(BOOL)eos;
@end

