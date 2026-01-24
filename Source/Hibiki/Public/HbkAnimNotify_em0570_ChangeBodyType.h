#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkEm0570MeshkitType.h"
#include "HbkAnimNotify_em0570_ChangeBodyType.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em0570_ChangeBodyType : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm0570MeshkitType MeshkitType;
    
public:
    UHbkAnimNotify_em0570_ChangeBodyType();

};

