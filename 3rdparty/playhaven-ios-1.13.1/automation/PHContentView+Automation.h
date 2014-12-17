/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 Copyright 2013 Medium Entertainment, Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 PHContentView+Automation.h
 playhaven-sdk-ios

 Created by Jesus Fernandez on 6/7/12.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#import "PHContentView.h"

@interface DispatchLog : NSObject
@property (nonatomic, copy)   NSString *dispatch;
@property (nonatomic, copy)   NSString *callback;
@property (nonatomic, assign) NSTimeInterval timestamp;
@property (nonatomic, assign) BOOL isComplete;
@end

@interface PHContentView (Automation)
+ (NSMutableArray *)_dispatchLog;
+ (DispatchLog *)firstDispatch:(NSString *)dispatch;
+ (void)completeDispatchWithCallback:(NSString *)callback;
- (void)_logRedirectForAutomation:(NSString *)urlPath callback:(NSString *)callback;
- (void)_logCallbackForAutomation:(NSString *)callback;
@end
