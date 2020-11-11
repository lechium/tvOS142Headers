/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKDMMCSItemReaderWriterProtocol.h>

@protocol CKDMMCSItemReaderWriterProtocol;
@class CKDMMCSItemGroupContext, CKDMMCSItem, NSString;

@interface CKDMMCSTestEncryptedItemReader : NSObject <CKDMMCSItemReaderWriterProtocol> {

	CKDMMCSItemGroupContext* _MMCSRequest;
	CKDMMCSItem* _MMCSItem;
	id<CKDMMCSItemReaderWriterProtocol> _underlyingItemReader;

}

@property (nonatomic,retain) CKDMMCSItemGroupContext * MMCSRequest;                                 //@synthesize MMCSRequest=_MMCSRequest - In the implementation block
@property (nonatomic,retain) CKDMMCSItem * MMCSItem;                                                //@synthesize MMCSItem=_MMCSItem - In the implementation block
@property (nonatomic,retain) id<CKDMMCSItemReaderWriterProtocol> underlyingItemReader;              //@synthesize underlyingItemReader=_underlyingItemReader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(CKDMMCSItemGroupContext *)MMCSRequest;
-(CKDMMCSItem *)MMCSItem;
-(id)getFileMetadataWithError:(id*)arg1 ;
-(BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5 ;
-(id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2 ;
-(void)setMMCSRequest:(CKDMMCSItemGroupContext *)arg1 ;
-(void)setMMCSItem:(CKDMMCSItem *)arg1 ;
-(id<CKDMMCSItemReaderWriterProtocol>)underlyingItemReader;
-(void)setUnderlyingItemReader:(id<CKDMMCSItemReaderWriterProtocol>)arg1 ;
@end

