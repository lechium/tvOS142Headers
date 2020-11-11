/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IMHandle, NSAttributedString, NSString, NSDate, NSArray, NSError, NSData, NSDictionary, IMBalloonPluginDataSource, IMMessageItem;

@interface IMMessage : NSObject <NSCopying> {

	IMHandle* _sender;
	IMHandle* _subject;
	NSAttributedString* _text;
	NSString* _plainBody;
	NSDate* _time;
	NSDate* _timeDelivered;
	NSDate* _timeRead;
	NSDate* _timePlayed;
	NSString* _guid;
	NSAttributedString* _messageSubject;
	NSArray* _fileTransferGUIDs;
	NSError* _error;
	NSString* _balloonBundleID;
	NSData* _payloadData;
	NSString* _expressiveSendStyleID;
	NSDate* _timeExpressiveSendPlayed;
	unsigned long long _flags;
	BOOL _isInvitationMessage;
	long long _messageID;
	NSDictionary* _bizIntent;
	NSString* _locale;
	BOOL _isAddressedToMe;
	BOOL _hasMention;
	BOOL _isSOS;
	NSString* _associatedMessageGUID;
	long long _associatedMessageType;
	NSDictionary* _messageSummaryInfo;
	NSString* _threadIdentifier;
	IMMessage* _threadOriginator;
	NSDictionary* _replyCountsByPart;
	NSString* _associatedBalloonBundleID;
	NSString* _sourceApplicationID;
	NSData* _customTypingIndicatorIcon;
	NSString* _notificationIDSTokenURI;
	unsigned long long _sortID;
	NSRange _associatedMessageRange;

}

@property (nonatomic,readonly) BOOL isRichLinkMessage; 
@property (nonatomic,readonly) IMBalloonPluginDataSource * richLinkDataSource; 
@property (nonatomic,copy,readonly) NSString * associatedMessageGUID; 
@property (nonatomic,readonly) BOOL isAssociatedMessage; 
@property (nonatomic,readonly) long long associatedMessageType; 
@property (nonatomic,copy,readonly) NSDictionary * messageSummaryInfo; 
@property (setter=_updateSender:,nonatomic,retain) IMHandle * sender;                                     //@synthesize sender=_sender - In the implementation block
@property (setter=_updateError:,nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (assign,setter=_updateFlags:,nonatomic) unsigned long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (setter=_updateTime:,nonatomic,retain) NSDate * time;                                           //@synthesize time=_time - In the implementation block
@property (setter=_updateTimeRead:,nonatomic,retain) NSDate * timeRead;                                   //@synthesize timeRead=_timeRead - In the implementation block
@property (setter=_updateTimeDelivered:,nonatomic,retain) NSDate * timeDelivered;                         //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (setter=_updateTimePlayed:,nonatomic,retain) NSDate * timePlayed;                               //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,setter=_updateMessageID:,nonatomic) long long messageID;                                //@synthesize messageID=_messageID - In the implementation block
@property (setter=_updateGUID:,nonatomic,retain) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (setter=_associatedMessageGUID:,nonatomic,copy) NSString * associatedMessageGUID;               //@synthesize associatedMessageGUID=_associatedMessageGUID - In the implementation block
@property (assign,setter=_associatedMessageType:,nonatomic) long long associatedMessageType;              //@synthesize associatedMessageType=_associatedMessageType - In the implementation block
@property (assign,setter=_associatedMessageRange:,nonatomic) NSRange associatedMessageRange;              //@synthesize associatedMessageRange=_associatedMessageRange - In the implementation block
@property (setter=_messageSummaryInfo:,nonatomic,copy) NSDictionary * messageSummaryInfo;                 //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
@property (setter=_updateBizIntent:,nonatomic,retain) NSDictionary * bizIntent;                           //@synthesize bizIntent=_bizIntent - In the implementation block
@property (setter=_updateLocale:,nonatomic,retain) NSString * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (setter=_updateText:,nonatomic,retain) NSAttributedString * text;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL isInvitationMessage;                                                    //@synthesize isInvitationMessage=_isInvitationMessage - In the implementation block
@property (nonatomic,readonly) IMMessageItem * _imMessageItem; 
@property (setter=_updateFileTransferGUIDs:,nonatomic,copy) NSArray * fileTransferGUIDs;                  //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long sortID;                                                   //@synthesize sortID=_sortID - In the implementation block
@property (nonatomic,readonly) IMHandle * subject;                                                        //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSAttributedString * messageSubject;                                       //@synthesize messageSubject=_messageSubject - In the implementation block
@property (nonatomic,readonly) NSString * plainBody; 
@property (nonatomic,readonly) NSString * senderName; 
@property (nonatomic,readonly) NSString * summaryString; 
@property (nonatomic,retain) NSString * balloonBundleID;                                                  //@synthesize balloonBundleID=_balloonBundleID - In the implementation block
@property (nonatomic,retain) NSData * payloadData;                                                        //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,retain) NSString * associatedBalloonBundleID;                                        //@synthesize associatedBalloonBundleID=_associatedBalloonBundleID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationID;                                              //@synthesize sourceApplicationID=_sourceApplicationID - In the implementation block
@property (nonatomic,retain) NSString * expressiveSendStyleID;                                            //@synthesize expressiveSendStyleID=_expressiveSendStyleID - In the implementation block
@property (nonatomic,retain) NSDate * timeExpressiveSendPlayed;                                           //@synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasInlineAttachments; 
@property (nonatomic,readonly) NSArray * inlineAttachmentAttributesArray; 
@property (nonatomic,readonly) BOOL isSent; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL isTypingMessage; 
@property (nonatomic,readonly) BOOL isLocatingMessage; 
@property (nonatomic,readonly) BOOL isEmote; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isDelayed; 
@property (nonatomic,readonly) BOOL isAutoReply; 
@property (nonatomic,readonly) BOOL isDelivered; 
@property (nonatomic,readonly) BOOL isRead; 
@property (nonatomic,readonly) BOOL isAudioMessage; 
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isAddressedToMe;                                                      //@synthesize isAddressedToMe=_isAddressedToMe - In the implementation block
@property (nonatomic,readonly) BOOL isAlert; 
@property (nonatomic,readonly) BOOL isSystemMessage; 
@property (nonatomic,readonly) BOOL hasDataDetectorResults; 
@property (assign,nonatomic) BOOL hasMention;                                                             //@synthesize hasMention=_hasMention - In the implementation block
@property (nonatomic,readonly) BOOL wasDowngraded; 
@property (nonatomic,readonly) BOOL wasDataDetected; 
@property (nonatomic,retain) NSData * customTypingIndicatorIcon;                                          //@synthesize customTypingIndicatorIcon=_customTypingIndicatorIcon - In the implementation block
@property (nonatomic,retain) NSString * notificationIDSTokenURI;                                          //@synthesize notificationIDSTokenURI=_notificationIDSTokenURI - In the implementation block
@property (assign,nonatomic) BOOL isSOS;                                                                  //@synthesize isSOS=_isSOS - In the implementation block
@property (nonatomic,copy) NSString * threadIdentifier;                                                   //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,retain) IMMessage * threadOriginator;                                                //@synthesize threadOriginator=_threadOriginator - In the implementation block
@property (nonatomic,retain) NSDictionary * replyCountsByPart;                                            //@synthesize replyCountsByPart=_replyCountsByPart - In the implementation block
+(id)instantMessageWithAssociatedMessageContent:(id)arg1 flags:(unsigned long long)arg2 associatedMessageGUID:(id)arg3 associatedMessageType:(long long)arg4 associatedMessageRange:(NSRange)arg5 messageSummaryInfo:(id)arg6 threadIdentifier:(id)arg7 ;
+(id)determineRichLinksInMessage:(id)arg1 additionalSupportedSchemes:(id)arg2 ;
+(Class)richLinksDataSourceClass;
+(id)locatingMessageWithGuid:(id)arg1 error:(id)arg2 ;
+(id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4 ;
+(id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2 ;
+(id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 threadIdentifier:(id)arg4 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 expressiveSendStyleID:(id)arg4 threadIdentifier:(id)arg5 ;
+(id)messageFromIMMessageItemDictionary:(id)arg1 body:(id)arg2 sender:(id)arg3 subject:(id)arg4 ;
+(BOOL)hasKnownSchemesForRichLinkURL:(id)arg1 additionalSupportedSchemes:(id)arg2 ;
+(BOOL)supportedRichLinkURL:(id)arg1 additionalSupportedSchemes:(id)arg2 ;
+(id)determineRichLinksInMessage:(id)arg1 ;
+(id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2 threadIdentifier:(id)arg3 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 expressiveSendStyleID:(id)arg4 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 threadIdentifier:(id)arg5 ;
+(id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 balloonBundleID:(id)arg5 payloadData:(id)arg6 expressiveSendStyleID:(id)arg7 ;
+(id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 ;
+(BOOL)hasKnownSchemesForRichLinkURL:(id)arg1 ;
+(id)_vCardDataWithCLLocation:(id)arg1 ;
+(id)editedMessageWithOriginalMessage:(id)arg1 originalPrefixedGUID:(id)arg2 newBody:(id)arg3 ;
+(id)breadcrumbMessageWithText:(id)arg1 associatedMessageGUID:(id)arg2 balloonBundleID:(id)arg3 fileTransferGUIDs:(id)arg4 payloadData:(id)arg5 threadIdentifier:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)flags;
-(BOOL)isEmpty;
-(long long)compare:(id)arg1 ;
-(NSString *)locale;
-(NSError *)error;
-(IMHandle *)sender;
-(BOOL)isFinished;
-(NSDate *)time;
-(BOOL)isRead;
-(NSAttributedString *)text;
-(IMHandle *)subject;
-(NSString *)guid;
-(long long)messageID;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(BOOL)isReply;
-(void)setPayloadData:(NSData *)arg1 ;
-(NSData *)payloadData;
-(BOOL)isAlert;
-(BOOL)isAudioMessage;
-(NSString *)summaryString;
-(BOOL)isSOS;
-(BOOL)isDelivered;
-(unsigned long long)sortID;
-(void)setBalloonBundleID:(NSString *)arg1 ;
-(void)setSortID:(unsigned long long)arg1 ;
-(NSString *)balloonBundleID;
-(BOOL)isFromMe;
-(BOOL)isSent;
-(NSAttributedString *)messageSubject;
-(NSDictionary *)messageSummaryInfo;
-(NSDate *)timeRead;
-(NSDate *)timePlayed;
-(NSDate *)timeDelivered;
-(long long)associatedMessageType;
-(NSString *)expressiveSendStyleID;
-(NSArray *)fileTransferGUIDs;
-(NSString *)plainBody;
-(void)setExpressiveSendStyleID:(NSString *)arg1 ;
-(NSDate *)timeExpressiveSendPlayed;
-(void)setTimeExpressiveSendPlayed:(NSDate *)arg1 ;
-(NSDictionary *)bizIntent;
-(void)setIsSOS:(BOOL)arg1 ;
-(NSString *)notificationIDSTokenURI;
-(void)setNotificationIDSTokenURI:(NSString *)arg1 ;
-(IMMessage *)threadOriginator;
-(void)setThreadOriginator:(IMMessage *)arg1 ;
-(NSDictionary *)replyCountsByPart;
-(void)setReplyCountsByPart:(NSDictionary *)arg1 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(BOOL)hasDataDetectorResults;
-(BOOL)isPlayed;
-(BOOL)wasDataDetected;
-(BOOL)wasDowngraded;
-(BOOL)isEmote;
-(BOOL)isTypingMessage;
-(BOOL)isLocatingMessage;
-(NSString *)associatedMessageGUID;
-(NSRange)associatedMessageRange;
-(IMMessageItem *)_imMessageItem;
-(id)descriptionForPurpose:(long long)arg1 inChat:(id)arg2 ;
-(id)descriptionForPurpose:(long long)arg1 ;
-(id)descriptionForPurpose:(long long)arg1 inChat:(id)arg2 senderDisplayName:(id)arg3 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 threadIdentifier:(id)arg10 ;
-(NSString *)sourceApplicationID;
-(void)setSourceApplicationID:(NSString *)arg1 ;
-(void)_updateSender:(id)arg1 ;
-(id)messagesBySeparatingRichLinks;
-(BOOL)isSystemMessage;
-(void)_updateBizIntent:(id)arg1 ;
-(void)_updateLocale:(id)arg1 ;
-(void)_updateGUID:(id)arg1 ;
-(void)_updateFileTransferGUIDs:(id)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 balloonBundleID:(id)arg10 payloadData:(id)arg11 expressiveSendStyleID:(id)arg12 threadIdentifier:(id)arg13 ;
-(void)setCustomTypingIndicatorIcon:(NSData *)arg1 ;
-(id)_copyWithFlags:(unsigned long long)arg1 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 threadIdentifier:(id)arg9 ;
-(id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14 balloonBundleID:(id)arg15 payloadData:(id)arg16 expressiveSendStyleID:(id)arg17 timeExpressiveSendPlayed:(id)arg18 associatedMessageGUID:(id)arg19 associatedMessageType:(long long)arg20 associatedMessageRange:(NSRange)arg21 messageSummaryInfo:(id)arg22 threadIdentifier:(id)arg23 ;
-(void)_updateTime:(id)arg1 ;
-(void)_updateTimeRead:(id)arg1 ;
-(void)_updateTimeDelivered:(id)arg1 ;
-(void)_updateTimePlayed:(id)arg1 ;
-(void)_updateMessageID:(long long)arg1 ;
-(void)_associatedMessageGUID:(id)arg1 ;
-(void)_associatedMessageType:(long long)arg1 ;
-(void)_associatedMessageRange:(NSRange)arg1 ;
-(void)_messageSummaryInfo:(id)arg1 ;
-(void)setAssociatedBalloonBundleID:(NSString *)arg1 ;
-(NSString *)senderName;
-(BOOL)hasInlineAttachments;
-(BOOL)isInvitationMessage;
-(BOOL)hasMention;
-(BOOL)isAddressedToMe;
-(NSString *)associatedBalloonBundleID;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 balloonBundleID:(id)arg10 payloadData:(id)arg11 expressiveSendStyleID:(id)arg12 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(NSRange)arg12 messageSummaryInfo:(id)arg13 ;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(NSRange)arg12 messageSummaryInfo:(id)arg13 threadIdentifier:(id)arg14 ;
-(id)initWithSender:(id)arg1 fileTransfer:(id)arg2 ;
-(NSArray *)inlineAttachmentAttributesArray;
-(BOOL)isDelayed;
-(BOOL)isAutoReply;
-(long long)compare:(id)arg1 comparisonType:(long long)arg2 ;
-(void)_ovverrideGUIDForTest:(id)arg1 ;
-(void)_updateText:(id)arg1 ;
-(void)_updateError:(id)arg1 ;
-(void)setIsInvitationMessage:(BOOL)arg1 ;
-(void)setHasMention:(BOOL)arg1 ;
-(NSData *)customTypingIndicatorIcon;
-(BOOL)isRichLinkMessage;
-(IMBalloonPluginDataSource *)richLinkDataSource;
-(BOOL)isAssociatedMessage;
-(id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(NSRange)arg12 associatedMessageInfo:(id)arg13 ;
@end

