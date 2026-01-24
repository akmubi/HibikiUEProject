#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHbkNp0900_ActionType.h"
#include "HbkNp0900_ComboData.h"
#include "HbkNp0900_JumpConditionData.h"
#include "HbkNp0900_ProgressData.h"
#include "HbkNp0900_TutorialPageData.h"
#include "HbkNp0900_BehaviorDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkNp0900_BehaviorDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkNp0900_JumpConditionData> JumpConditionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0900_ProgressData ChangeProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnPlayable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextStepName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0900_ComboData ComboCheckData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkNp0900_TutorialPageData> TutorialPageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkNp0900_ActionType> ExecActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeTargetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitIdleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateBrowsed;
    
    HIBIKI_API FHbkNp0900_BehaviorDataRow();
};

