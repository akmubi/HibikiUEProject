#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkEm0570MeshkitType.h"
#include "HbkAnimNotifyState_em0570_ChangeBodyType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_em0570_ChangeBodyType : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm0570MeshkitType BeginMeshkitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm0570MeshkitType EndMeshkitType;
    
public:
    UHbkAnimNotifyState_em0570_ChangeBodyType();

};

