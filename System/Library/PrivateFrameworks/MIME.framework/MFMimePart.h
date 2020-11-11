/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MIME/MIME-Structs.h>
@class NSString, NSMutableDictionary, MFWeakReferenceHolder, NSURL, MFPartialNetworkDataConsumer, NSData;

@interface MFMimePart : NSObject {

	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	NSMutableDictionary* _otherIvars;
	NSRange _range;
	MFWeakReferenceHolder* _parent;
	MFWeakReferenceHolder* _body;
	MFMimePart* _nextPart;
	NSURL* _partURL;
	NSURL* _parentPartURL;
	MFPartialNetworkDataConsumer* _partialDataConsumer;
	NSData* _fullData;
	MFWeakReferenceHolder* _decodedData;

}
+(void)initialize;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 ;
+(Class)attachmentClass;
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)bodyData;
-(void)download;
-(id)disposition;
-(void)setDisposition:(id)arg1 ;
-(id)attachments;
-(NSRange)range;
-(id)subtype;
-(id)contentLocation;
-(void)setContentLocation:(id)arg1 ;
-(void)setSubtype:(id)arg1 ;
-(id)languages;
-(void)setLanguages:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(id)contentDescription;
-(void)setRange:(NSRange)arg1 ;
-(id)fileWrapper;
-(BOOL)isAttachment;
-(long long)numberOfAlternatives;
-(id)alternativeAtIndex:(long long)arg1 ;
-(BOOL)hasContents;
-(unsigned)numberOfAttachments;
-(id)signedData;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(BOOL)isHTML;
-(BOOL)isRich;
-(id)attachmentURLs;
-(id)textHtmlPart;
-(id)mimeBody;
-(id)parentPart;
-(void)setSubparts:(id)arg1 ;
-(id)firstChildPart;
-(id)nextSiblingPart;
-(void)addSubpart:(id)arg1 ;
-(id)contentTransferEncoding;
-(id)partNumber;
-(id)dispositionParameterForKey:(id)arg1 ;
-(id)bodyParameterForKey:(id)arg1 ;
-(id)attachmentFilename;
-(id)chosenAlternativePart;
-(id)_partThatIsAttachment;
-(id)subparts;
-(BOOL)isReadableText;
-(BOOL)shouldConsiderInlineOverridingExchangeServer;
-(BOOL)isGenerated;
-(id)startPart;
-(unsigned long long)totalTextSize;
-(id)subpartAtIndex:(long long)arg1 ;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5 ;
-(id)bodyDataForcingDownload:(BOOL)arg1 ;
-(id)contentsForTextSystemForcingDownload:(BOOL)arg1 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodedDataForData:(id)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2 ;
-(void)getNumberOfAttachments:(unsigned*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3 ;
-(id)partURL;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(id)bodyParameterKeys;
-(id)preservedHeaderValueForKey:(id)arg1 ;
-(void)setContentTransferEncoding:(id)arg1 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(id)dispositionParameterKeys;
-(void)setMimeBody:(id)arg1 ;
-(unsigned)textEncoding;
-(unsigned)approximateRawSize;
-(BOOL)usesKnownSignatureProtocol;
-(id)rfc822DecodedMessageBody;
-(void)_setRFC822DecodedMessageBody:(id)arg1 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 ;
-(void)clearCachedDescryptedMessageBody;
-(BOOL)_hasCompleteBodyDataToOffset:(unsigned long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(void)setIsGenerated:(BOOL)arg1 ;
-(BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1 ;
-(BOOL)parseMimeBody;
-(BOOL)parseIMAPPropertyList:(id)arg1 ;
-(void)_contents:(id*)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentsForTextSystem;
-(id)decodeText;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(void)decodeIfNecessary;
-(id)decodeApplicationZip;
-(id)decodeApplicationOctet_stream;
-(id)decodeMultipartRelated;
-(id)decodeMultipartAlternative;
-(id)decodeMultipart;
@end

