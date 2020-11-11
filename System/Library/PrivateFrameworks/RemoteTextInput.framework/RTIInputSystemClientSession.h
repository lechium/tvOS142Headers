/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTIDocumentTraits, RTIDocumentState;

@interface RTIInputSystemClientSession : NSObject {

	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;

}

@property (nonatomic,retain) RTIDocumentTraits * documentTraits;              //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                //@synthesize documentState=_documentState - In the implementation block
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(RTIDocumentTraits *)documentTraits;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
@end
