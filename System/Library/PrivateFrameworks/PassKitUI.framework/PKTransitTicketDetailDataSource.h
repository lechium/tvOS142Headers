/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKTransitTicketDetailDataSource <NSObject>
@required
-(unsigned long long)numberOfLegs;
-(id)titleForLeg:(unsigned long long)arg1;
-(long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
-(id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
-(id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end

