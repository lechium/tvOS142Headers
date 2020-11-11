/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSMemoryMap : NSObject {

	int _fd;
	NSString* _filePath;
	unsigned long long _fileSize;
	void* _mappedData;

}

@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) void* mappedData;                         //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,readonly) int fd;                                   //@synthesize fd=_fd - In the implementation block
-(void)dealloc;
-(unsigned long long)fileSize;
-(int)fd;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 ;
-(void*)mappedData;
-(BOOL)mmap;
-(void)madvise;
@end

