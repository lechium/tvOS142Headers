/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotification/ExposureNotification-Structs.h>
@class ENArchive, NSMutableDictionary, NSMutableData, ENProtobufCoder, NSDictionary, NSData;

@interface ENFile : NSObject {

	ENArchive* _archive;
	_sFILE* _fileHandle;
	unsigned long long _keyIndex;
	BOOL _reading;
	unsigned _metadataFlags;
	NSMutableDictionary* _mutableMetadata;
	NSMutableData* _outputData;
	ENProtobufCoder* _protobufCoder;
	ENProtobufCoder* _tekProtobufCoder;
	NSDictionary* _metadata;
	NSData* _sha256Data;

}

@property (nonatomic,copy) NSDictionary * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * sha256Data;              //@synthesize sha256Data=_sha256Data - In the implementation block
-(void)dealloc;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(BOOL)_readPrepareAndReturnError:(id*)arg1 ;
-(BOOL)_writePrepareAndReturnError:(id*)arg1 ;
-(BOOL)openWithFD:(int)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_readHeaderFromArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readHashFromArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readMetadataFromArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readHeaderFromFile:(_sFILE*)arg1 error:(id*)arg2 ;
-(BOOL)_readHashFromFile:(_sFILE*)arg1 error:(id*)arg2 ;
-(BOOL)_readMetadataFromFileHandle:(_sFILE*)arg1 error:(id*)arg2 ;
-(BOOL)_readMetadataFromCoder:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeMetadataAndReturnError:(id*)arg1 ;
-(id)readTEKWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)_readKeyWithPtr:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeTEK:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)openWithArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)openWithFileSystemRepresentation:(const char*)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)openForWritingToData:(id)arg1 error:(id*)arg2 ;
-(id)readTEKAndReturnError:(id*)arg1 ;
-(BOOL)writeTEK:(id)arg1 error:(id*)arg2 ;
-(NSData *)sha256Data;
@end

