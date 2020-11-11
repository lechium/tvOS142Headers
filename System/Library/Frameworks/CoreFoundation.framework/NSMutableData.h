/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned long long length; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithCapacity:(unsigned long long)arg1 ;
-(BOOL)_isCompact;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(void)appendData:(id)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)setData:(id)arg1 ;
-(BOOL)compressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(BOOL)decompressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
@end

