#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_PlayTalkLine.generated.h"

class UDataTable;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_PlayTalkLine : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalktRowName;
    
    UHbkAnimNotify_PlayTalkLine();

};

