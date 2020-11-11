/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _PSShareSheetSuggestLessFeedback : NSObject {

	NSString* _bundleId;
	NSString* _conversationId;
	NSString* _derivedIntentId;
	NSString* _contactId;
	NSString* _handle;

}

@property (nonatomic,copy,readonly) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationId;               //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * derivedIntentId;              //@synthesize derivedIntentId=_derivedIntentId - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactId;                    //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                       //@synthesize handle=_handle - In the implementation block
-(NSString *)handle;
-(NSString *)bundleId;
-(NSString *)contactId;
-(NSString *)conversationId;
-(id)knowledgeEvent;
-(id)initWithBundleId:(id)arg1 conversationId:(id)arg2 derivedIntentId:(id)arg3 handle:(id)arg4 contactId:(id)arg5 ;
-(NSString *)derivedIntentId;
-(id)initWithBundleId:(id)arg1 conversationId:(id)arg2 handle:(id)arg3 contactId:(id)arg4 ;
@end

