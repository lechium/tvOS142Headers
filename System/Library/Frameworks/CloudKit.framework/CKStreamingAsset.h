/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSURL, NSDate, C2RequestOptions;

@interface CKStreamingAsset : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {

	BOOL _hasSize;
	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSString* _owner;
	unsigned long long _expectedSizeBytes;
	NSURL* _uploadURL;
	NSDate* _uploadURLExpirationDate;
	unsigned long long _reservedSize;
	C2RequestOptions* _requestOptions;
	NSURL* _downloadURL;
	NSDate* _downloadURLExpirationDate;
	unsigned long long _size;
	NSString* _uploadReceipt;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * fileSignature;                                          //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,copy) NSData * referenceSignature;                                     //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSString * owner;                                                //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long expectedSizeBytes;                          //@synthesize expectedSizeBytes=_expectedSizeBytes - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                               //@synthesize uploadURL=_uploadURL - In the implementation block
@property (nonatomic,copy) NSDate * uploadURLExpirationDate;                                //@synthesize uploadURLExpirationDate=_uploadURLExpirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long reservedSize;                               //@synthesize reservedSize=_reservedSize - In the implementation block
@property (nonatomic,copy) C2RequestOptions * requestOptions;                               //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,copy) NSURL * downloadURL;                                             //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,copy) NSDate * downloadURLExpirationDate;                              //@synthesize downloadURLExpirationDate=_downloadURLExpirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                                  //@synthesize hasSize=_hasSize - In the implementation block
@property (nonatomic,copy) NSString * uploadReceipt;                                        //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesUploaded; 
@property (nonatomic,readonly) unsigned long long bytesUpperBound; 
@property (nonatomic,copy,readonly) NSURL * contentDownloadURL; 
@property (nonatomic,copy,readonly) NSDate * contentDownloadURLExpirationDate; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOwner:(NSString *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(C2RequestOptions *)requestOptions;
-(void)setRequestOptions:(C2RequestOptions *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSString *)owner;
-(id)_initBare;
-(NSString *)uploadReceipt;
-(NSURL *)downloadURL;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(NSURL *)uploadURL;
-(unsigned long long)bytesUploaded;
-(void)copyServerFieldsFromStreamingAsset:(id)arg1 ;
-(void)setUploadURL:(NSURL *)arg1 ;
-(NSDate *)uploadURLExpirationDate;
-(void)setUploadURLExpirationDate:(NSDate *)arg1 ;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSDate *)downloadURLExpirationDate;
-(void)setDownloadURLExpirationDate:(NSDate *)arg1 ;
-(unsigned long long)expectedSizeBytes;
-(void)setExpectedSizeBytes:(unsigned long long)arg1 ;
-(unsigned long long)reservedSize;
-(void)setReservedSize:(unsigned long long)arg1 ;
-(id)initWithExpectedSizeBytes:(unsigned long long)arg1 ;
-(NSURL *)contentDownloadURL;
-(NSDate *)contentDownloadURLExpirationDate;
-(unsigned long long)bytesUpperBound;
@end

