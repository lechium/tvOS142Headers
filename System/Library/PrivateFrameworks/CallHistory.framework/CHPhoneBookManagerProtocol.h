/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
+(id)get;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2;
-(id)getPersonsNameForContact:(id)arg1;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3;
-(BOOL)isABContactASuggestion;

@end

