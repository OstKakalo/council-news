//
//  SQ_AvdioCell.h
//  SQ_ SateCouncilNews
//
//  Created by FuShouqiang on 16/9/25.
//  Copyright © 2016年 fu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SQ_Article.h"


@interface SQ_AvdioCell : UITableViewCell

@property (nonatomic, strong)NSDictionary *dataDic;
@property (nonatomic, copy) void(^block)(SQ_Article* article);

@end
